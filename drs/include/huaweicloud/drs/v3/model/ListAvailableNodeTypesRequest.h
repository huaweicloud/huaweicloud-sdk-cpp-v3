
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableNodeTypesRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableNodeTypesRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListAvailableNodeTypesRequest
    : public ModelBase
{
public:
    ListAvailableNodeTypesRequest();
    virtual ~ListAvailableNodeTypesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAvailableNodeTypesRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 迁移场景。 - migration:实时迁移 - sync:实时同步 - cloudDataGuard:实时灾备
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// 迁移方向，up：入云 ，down：出云，non-dbs：自建。
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 是否查询资源售罄情况
    /// </summary>

    bool isIsUseSelloutInfo() const;
    bool isUseSelloutInfoIsSet() const;
    void unsetisUseSelloutInfo();
    void setIsUseSelloutInfo(bool value);

    /// <summary>
    /// 是否是双主灾备
    /// </summary>

    bool isIsMultiWrite() const;
    bool isMultiWriteIsSet() const;
    void unsetisMultiWrite();
    void setIsMultiWrite(bool value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string dbUseType_;
    bool dbUseTypeIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    bool isUseSelloutInfo_;
    bool isUseSelloutInfoIsSet_;
    bool isMultiWrite_;
    bool isMultiWriteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAvailableNodeTypesRequest& dereference_from_shared_ptr(std::shared_ptr<ListAvailableNodeTypesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableNodeTypesRequest_H_

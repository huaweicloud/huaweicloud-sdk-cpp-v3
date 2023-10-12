
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlInstanceDetailInfoRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlInstanceDetailInfoRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListGaussMySqlInstanceDetailInfoRequest
    : public ModelBase
{
public:
    ListGaussMySqlInstanceDetailInfoRequest();
    virtual ~ListGaussMySqlInstanceDetailInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGaussMySqlInstanceDetailInfoRequest members

    /// <summary>
    /// 语言。默认英语。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID。最多同时输入20个实例ID，用英文逗号分隔。
    /// </summary>

    std::string getInstanceIds() const;
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceIds_;
    bool instanceIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGaussMySqlInstanceDetailInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ListGaussMySqlInstanceDetailInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlInstanceDetailInfoRequest_H_

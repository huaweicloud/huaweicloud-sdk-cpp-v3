
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListUserJdbcDriversRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListUserJdbcDriversRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListUserJdbcDriversRequest
    : public ModelBase
{
public:
    ListUserJdbcDriversRequest();
    virtual ~ListUserJdbcDriversRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserJdbcDriversRequest members

    /// <summary>
    /// 每页显示的条目数量。默认为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询， offset 大于等于 0。默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 指定待查询的驱动文件类型。取值范围： - db2：DB2 for LUW - informix：Informix
    /// </summary>

    std::string getDriverType() const;
    bool driverTypeIsSet() const;
    void unsetdriverType();
    void setDriverType(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string driverType_;
    bool driverTypeIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUserJdbcDriversRequest& dereference_from_shared_ptr(std::shared_ptr<ListUserJdbcDriversRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListUserJdbcDriversRequest_H_

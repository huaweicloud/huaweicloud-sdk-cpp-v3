
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListDomainLogsRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListDomainLogsRequest_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListDomainLogsRequest
    : public ModelBase
{
public:
    ListDomainLogsRequest();
    virtual ~ListDomainLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDomainLogsRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 加速域名，参考格式：www.test1.com。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 查询开始时间，格式为yyyyMMddHHmmss。 - 查询结果为开始时间之后24小时内的日志数据 - 只能查最近一个月内的数据
    /// </summary>

    std::string getQueryDate() const;
    bool queryDateIsSet() const;
    void unsetqueryDate();
    void setQueryDate(const std::string& value);

    /// <summary>
    /// 每页显示日志数量。 
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 当前页数。 
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string queryDate_;
    bool queryDateIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDomainLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDomainLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListDomainLogsRequest_H_

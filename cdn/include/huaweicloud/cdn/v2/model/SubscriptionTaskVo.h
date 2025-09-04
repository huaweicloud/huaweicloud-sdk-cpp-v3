
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SubscriptionTaskVo_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SubscriptionTaskVo_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订阅任务
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SubscriptionTaskVo
    : public ModelBase
{
public:
    SubscriptionTaskVo();
    virtual ~SubscriptionTaskVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscriptionTaskVo members

    /// <summary>
    /// - 订阅任务的名称 - [单词字符] [减号] [中文字符] 长度不超过32
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// - 订阅任务类型，类型如下： - 0：日报 - 1：周报 - 2：月报
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 接收运营报表的邮箱地址。支持同时输入多个邮箱地址，多个邮箱地址用英文逗号（,）分隔。
    /// </summary>

    std::string getEmails() const;
    bool emailsIsSet() const;
    void unsetemails();
    void setEmails(const std::string& value);

    /// <summary>
    /// 订阅的域名列表，支持同时输入多个域名，多个域名用半角逗号（,）分隔；说明：如果该参数为all，则为账号下的所有域名订阅运营报表。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// - 运营报表类型。支持同时输入多个报表类型，多个报表类型以英文逗号（,）分隔。 - 0：访问区域分布 - 1：国家分布 - 2：运营商分布 - 3：域名排行（按流量排序） - 4：热门URL（按流量排序） - 5：热门URL（按请求数排序） - 6：热门Referer（按流量排序） - 7：热门Referer（按请求数排序） - 10：回源热门URL（按流量排序） - 11：回源热门URL（按请求数排序） - 13：热门UA（按流量排序） - 14：热门UA（按请求数排序）
    /// </summary>

    std::string getReportType() const;
    bool reportTypeIsSet() const;
    void unsetreportType();
    void setReportType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t periodType_;
    bool periodTypeIsSet_;
    std::string emails_;
    bool emailsIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string reportType_;
    bool reportTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SubscriptionTaskVo_H_

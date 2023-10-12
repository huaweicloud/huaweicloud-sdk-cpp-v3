
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyResultVo_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyResultVo_H_


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
/// 成功响应详细内容。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BatchCopyResultVo
    : public ModelBase
{
public:
    BatchCopyResultVo();
    virtual ~BatchCopyResultVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCopyResultVo members

    /// <summary>
    /// 失败原因,成功时没有该字段
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 批量操作结果。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 域名。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);


protected:
    std::string reason_;
    bool reasonIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyResultVo_H_

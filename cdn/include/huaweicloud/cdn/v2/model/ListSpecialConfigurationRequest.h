
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSpecialConfigurationRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSpecialConfigurationRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListSpecialConfigurationRequest
    : public ModelBase
{
public:
    ListSpecialConfigurationRequest();
    virtual ~ListSpecialConfigurationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSpecialConfigurationRequest members

    /// <summary>
    /// **参数解释：** 加速域名  **约束限制：** 仅支持查询已经在CDN添加成功的域名 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 每页加速域名的数量 **约束限制：** 不涉及 **取值范围：** 1-10000 **默认取值：** 30
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// **参数解释：** 查询的页码 **约束限制：** 不涉及 **取值范围：** 1-65535 **默认取值：** 1
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSpecialConfigurationRequest& dereference_from_shared_ptr(std::shared_ptr<ListSpecialConfigurationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSpecialConfigurationRequest_H_

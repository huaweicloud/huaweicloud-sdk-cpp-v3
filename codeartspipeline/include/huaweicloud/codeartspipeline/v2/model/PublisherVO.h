
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PublisherVO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PublisherVO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PublisherVO
    : public ModelBase
{
public:
    PublisherVO();
    virtual ~PublisherVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublisherVO members

    /// <summary>
    /// **参数解释**： 发布商ID。可通过[查询发布商详情](ShowPublisher.xml)查询。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPublisherUniqueId() const;
    bool publisherUniqueIdIsSet() const;
    void unsetpublisherUniqueId();
    void setPublisherUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商图标URL。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLogoUrl() const;
    bool logoUrlIsSet() const;
    void unsetlogoUrl();
    void setLogoUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建发布商时填入的网页地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getWebsite() const;
    bool websiteIsSet() const;
    void unsetwebsite();
    void setWebsite(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建发布商时填入的帮助地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSupportUrl() const;
    bool supportUrlIsSet() const;
    void unsetsupportUrl();
    void setSupportUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建发布商时填入的源地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSourceUrl() const;
    bool sourceUrlIsSet() const;
    void unsetsourceUrl();
    void setSourceUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商英文名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getEnName() const;
    bool enNameIsSet() const;
    void unsetenName();
    void setEnName(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商中文名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 授权状态。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getAuthStatus() const;
    bool authStatusIsSet() const;
    void unsetauthStatus();
    void setAuthStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否删除。 **取值范围**： - 0：未删除。 - 1：已删除。 
    /// </summary>

    int32_t getIsDelete() const;
    bool isDeleteIsSet() const;
    void unsetisDelete();
    void setIsDelete(int32_t value);

    /// <summary>
    /// **参数解释**： 最后更新人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLastUpdateUserName() const;
    bool lastUpdateUserNameIsSet() const;
    void unsetlastUpdateUserName();
    void setLastUpdateUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 最后更新人用户ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLastUpdateUserId() const;
    bool lastUpdateUserIdIsSet() const;
    void unsetlastUpdateUserId();
    void setLastUpdateUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 最后更新时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);


protected:
    std::string publisherUniqueId_;
    bool publisherUniqueIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string logoUrl_;
    bool logoUrlIsSet_;
    std::string website_;
    bool websiteIsSet_;
    std::string supportUrl_;
    bool supportUrlIsSet_;
    std::string sourceUrl_;
    bool sourceUrlIsSet_;
    std::string enName_;
    bool enNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string authStatus_;
    bool authStatusIsSet_;
    int32_t isDelete_;
    bool isDeleteIsSet_;
    std::string lastUpdateUserName_;
    bool lastUpdateUserNameIsSet_;
    std::string lastUpdateUserId_;
    bool lastUpdateUserIdIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PublisherVO_H_

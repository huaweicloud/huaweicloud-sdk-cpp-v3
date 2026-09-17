
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_tag_list_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_tag_list_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelinesPage_tag_list
    : public ModelBase
{
public:
    ListPipelinesPage_tag_list();
    virtual ~ListPipelinesPage_tag_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelinesPage_tag_list members

    /// <summary>
    /// **参数解释**： 标签ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTagId() const;
    bool tagIdIsSet() const;
    void unsettagId();
    void setTagId(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签颜色。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 更新人ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUpdaterId() const;
    bool updaterIdIsSet() const;
    void unsetupdaterId();
    void setUpdaterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 更新时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    std::string tagId_;
    bool tagIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string updaterId_;
    bool updaterIdIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_tag_list_H_

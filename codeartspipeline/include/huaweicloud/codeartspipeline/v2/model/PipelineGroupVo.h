
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineGroupVo_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineGroupVo_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PipelineGroupVo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线分组详情
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineGroupVo
    : public ModelBase
{
public:
    PipelineGroupVo();
    virtual ~PipelineGroupVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineGroupVo members

    /// <summary>
    /// **参数解释**： 分组ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 分组名。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 父分组ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 分组路径ID。例如id1.id2.id3 代表分组id3的父分组为id2，分组id2的父分组为id1。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPathId() const;
    bool pathIdIsSet() const;
    void unsetpathId();
    void setPathId(const std::string& value);

    /// <summary>
    /// **参数解释**： 序号。 **取值范围**： 大于等于1。 
    /// </summary>

    int32_t getOrdinal() const;
    bool ordinalIsSet() const;
    void unsetordinal();
    void setOrdinal(int32_t value);

    /// <summary>
    /// **参数解释**： 创建用户ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// **参数解释**： 更新用户ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getUpdater() const;
    bool updaterIsSet() const;
    void unsetupdater();
    void setUpdater(const std::string& value);

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

    /// <summary>
    /// **参数解释**： 流水线分组详情。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PipelineGroupVo>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<PipelineGroupVo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string pathId_;
    bool pathIdIsSet_;
    int32_t ordinal_;
    bool ordinalIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string updater_;
    bool updaterIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::vector<PipelineGroupVo>* children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineGroupVo_H_

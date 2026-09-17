
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectInfoVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectInfoVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目详情对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProjectInfoVO
    : public ModelBase
{
public:
    ProjectInfoVO();
    virtual ~ProjectInfoVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectInfoVO members

    /// <summary>
    /// **参数解释**： 项目ID。 **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名称。 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目类型。 **取值范围**： - ipd：IPD项目 - scrum：scrum项目 - xboard：看板项目
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目空间ID。 **取值范围**： 不涉及
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： IPD项目模型Id。 **取值范围**： 10001（系统设备类） 10002（独立软件类） 10003（云服务类型）
    /// </summary>

    std::string getModelId() const;
    bool modelIdIsSet() const;
    void unsetmodelId();
    void setModelId(const std::string& value);

    /// <summary>
    /// **参数解释**： 该项目是否接受外部RR（原始需求）。 **取值范围**： - 0：不接受外部RR - 1：接受外部RR
    /// </summary>

    int32_t getAcceptRr() const;
    bool acceptRrIsSet() const;
    void unsetacceptRr();
    void setAcceptRr(int32_t value);

    /// <summary>
    /// **参数解释**： 项目类型，用于区分项目和项目群。 **取值范围**： - Project：项目 - Group：项目群
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目创建人名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedByName() const;
    bool createdByNameIsSet() const;
    void unsetcreatedByName();
    void setCreatedByName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string modelId_;
    bool modelIdIsSet_;
    int32_t acceptRr_;
    bool acceptRrIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string createdByName_;
    bool createdByNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectInfoVO_H_

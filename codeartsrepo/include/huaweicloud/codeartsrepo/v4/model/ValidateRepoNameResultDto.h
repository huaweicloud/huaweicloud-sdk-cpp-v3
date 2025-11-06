
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ValidateRepoNameResultDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ValidateRepoNameResultDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/ValidateRepoNameDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ValidateRepoNameResultDto
    : public ModelBase
{
public:
    ValidateRepoNameResultDto();
    virtual ~ValidateRepoNameResultDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateRepoNameResultDto members

    /// <summary>
    /// **参数解释：** 仓库名。 **约束限制：** - 必填。 - 大小写字母、数字、下划线开头，可包含大小写字母、数字、中划线、下划线、英文句点，但不能以.git、.atom或.结尾 - 代码总路径长度（代码组名称和仓库名称总长度）不超过256字符 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目ID。 **约束限制：** 必填。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组ID，若需要检查的仓库名称在项目根目录下可不传此参数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 1-2147483647
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// **参数解释：** 是否校验通过 **取值范围：** - true，校验通过。 - false，校验未通过。 **约束限制：** 不涉及。
    /// </summary>

    bool isResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(bool value);

    /// <summary>
    /// **参数解释：** 异常信息 **约束限制：** 不涉及。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t groupId_;
    bool groupIdIsSet_;
    bool result_;
    bool resultIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ValidateRepoNameResultDto_H_

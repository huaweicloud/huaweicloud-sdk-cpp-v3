
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchCreateRepositoryMemberDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchCreateRepositoryMemberDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CreateRepositoryMemberResponseDto.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BatchCreateRepositoryMemberDto
    : public ModelBase
{
public:
    BatchCreateRepositoryMemberDto();
    virtual ~BatchCreateRepositoryMemberDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateRepositoryMemberDto members

    /// <summary>
    /// **参数解释：** 批量添加是否成功 **约束限制：** - success，全部添加成功。 - error，未全部添加成功。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 批量添加结果详情。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<CreateRepositoryMemberResponseDto>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<CreateRepositoryMemberResponseDto>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<CreateRepositoryMemberResponseDto> result_;
    bool resultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchCreateRepositoryMemberDto_H_

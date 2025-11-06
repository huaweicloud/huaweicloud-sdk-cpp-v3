
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestApproversResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestApproversResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestApproversResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMergeRequestApproversResponse();
    virtual ~ListMergeRequestApproversResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestApproversResponse members

    /// <summary>
    /// **参数解释：** 必选审核人列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<UserBasicDto>& getRequiredApproversList();
    bool requiredApproversListIsSet() const;
    void unsetrequiredApproversList();
    void setRequiredApproversList(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// **参数解释：** 可选审核人列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<UserBasicDto>& getOptionalApproversList();
    bool optionalApproversListIsSet() const;
    void unsetoptionalApproversList();
    void setOptionalApproversList(const std::vector<UserBasicDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<UserBasicDto> requiredApproversList_;
    bool requiredApproversListIsSet_;
    std::vector<UserBasicDto> optionalApproversList_;
    bool optionalApproversListIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestApproversResponse_H_


#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateInteractionRuleGroupResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateInteractionRuleGroupResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/InteractionRuleDetailInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateInteractionRuleGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateInteractionRuleGroupResponse();
    virtual ~UpdateInteractionRuleGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInteractionRuleGroupResponse members

    /// <summary>
    /// 互动规则库ID
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 互动规则库名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 互动规则列表。 &gt; 查询互动规则库列表接口不再返回该内容。请使用查询互动规则库详情接口查具体某个库的规则列表。
    /// </summary>

    std::vector<InteractionRuleDetailInfo>& getInteractionRules();
    bool interactionRulesIsSet() const;
    void unsetinteractionRules();
    void setInteractionRules(const std::vector<InteractionRuleDetailInfo>& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::vector<InteractionRuleDetailInfo> interactionRules_;
    bool interactionRulesIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateInteractionRuleGroupResponse_H_

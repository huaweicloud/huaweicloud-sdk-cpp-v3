
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssociateIssueInfoVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssociateIssueInfoVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联需求信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AssociateIssueInfoVo
    : public ModelBase
{
public:
    AssociateIssueInfoVo();
    virtual ~AssociateIssueInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateIssueInfoVo members

    /// <summary>
    /// 是否已关联
    /// </summary>

    bool isAssociate() const;
    bool associateIsSet() const;
    void unsetassociate();
    void setAssociate(bool value);

    /// <summary>
    /// 需求ID
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 需求类型
    /// </summary>

    std::string getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(const std::string& value);

    /// <summary>
    /// 工作项层级ID
    /// </summary>

    std::string getBoardId() const;
    bool boardIdIsSet() const;
    void unsetboardId();
    void setBoardId(const std::string& value);

    /// <summary>
    /// 需求类型名称
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);


protected:
    bool associate_;
    bool associateIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string trackerId_;
    bool trackerIdIsSet_;
    std::string boardId_;
    bool boardIdIsSet_;
    std::string trackerName_;
    bool trackerNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssociateIssueInfoVo_H_

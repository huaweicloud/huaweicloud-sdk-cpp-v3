
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueStatus_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueStatus_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/StatusAttribute.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueStatus
    : public ModelBase
{
public:
    IssueStatus();
    virtual ~IssueStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueStatus members

    /// <summary>
    /// 状态uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态数字id
    /// </summary>

    int32_t getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(int32_t value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 关联的工作项类型列表
    /// </summary>

    std::vector<int32_t>& getTrackerIds();
    bool trackerIdsIsSet() const;
    void unsettrackerIds();
    void setTrackerIds(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    StatusAttribute getStatusAttribute() const;
    bool statusAttributeIsSet() const;
    void unsetstatusAttribute();
    void setStatusAttribute(const StatusAttribute& value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t statusId_;
    bool statusIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<int32_t> trackerIds_;
    bool trackerIdsIsSet_;
    StatusAttribute statusAttribute_;
    bool statusAttributeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueStatus_H_

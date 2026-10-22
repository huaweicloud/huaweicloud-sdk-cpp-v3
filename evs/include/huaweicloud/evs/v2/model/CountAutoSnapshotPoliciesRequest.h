
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CountAutoSnapshotPoliciesRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CountAutoSnapshotPoliciesRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CountAutoSnapshotPoliciesRequest
    : public ModelBase
{
public:
    CountAutoSnapshotPoliciesRequest();
    virtual ~CountAutoSnapshotPoliciesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountAutoSnapshotPoliciesRequest members

    /// <summary>
    /// 自动快照策略ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 自动快照策略名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 自动快照策略的标签的key。
    /// </summary>

    std::string getTagKey() const;
    bool tagKeyIsSet() const;
    void unsettagKey();
    void setTagKey(const std::string& value);

    /// <summary>
    /// 自动快照策略的标签的key/value对，例如[{\&quot;key1\&quot;:\&quot;value1\&quot;}]。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 自动快照策略的企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string tagKey_;
    bool tagKeyIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CountAutoSnapshotPoliciesRequest& dereference_from_shared_ptr(std::shared_ptr<CountAutoSnapshotPoliciesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CountAutoSnapshotPoliciesRequest_H_

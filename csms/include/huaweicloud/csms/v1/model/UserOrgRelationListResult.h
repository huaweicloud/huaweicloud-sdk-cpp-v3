
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UserOrgRelationListResult_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UserOrgRelationListResult_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  UserOrgRelationListResult
    : public ModelBase
{
public:
    UserOrgRelationListResult();
    virtual ~UserOrgRelationListResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserOrgRelationListResult members

    /// <summary>
    /// 组织id
    /// </summary>

    std::string getOrgId() const;
    bool orgIdIsSet() const;
    void unsetorgId();
    void setOrgId(const std::string& value);

    /// <summary>
    /// 关系类型。
    /// </summary>

    std::string getRelationType() const;
    bool relationTypeIsSet() const;
    void unsetrelationType();
    void setRelationType(const std::string& value);


protected:
    std::string orgId_;
    bool orgIdIsSet_;
    std::string relationType_;
    bool relationTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UserOrgRelationListResult_H_

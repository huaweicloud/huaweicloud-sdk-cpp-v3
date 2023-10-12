
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_FollowerMigrateRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_FollowerMigrateRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  FollowerMigrateRequest
    : public ModelBase
{
public:
    FollowerMigrateRequest();
    virtual ~FollowerMigrateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FollowerMigrateRequest members

    /// <summary>
    /// 备机节点Id
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 要迁入的可用区code
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_FollowerMigrateRequest_H_

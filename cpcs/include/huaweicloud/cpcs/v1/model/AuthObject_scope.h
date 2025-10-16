
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_scope_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_scope_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/AuthObject_scope_cluster.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 鉴权范围
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AuthObject_scope
    : public ModelBase
{
public:
    AuthObject_scope();
    virtual ~AuthObject_scope();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthObject_scope members

    /// <summary>
    /// 
    /// </summary>

    AuthObject_scope_cluster getCluster() const;
    bool clusterIsSet() const;
    void unsetcluster();
    void setCluster(const AuthObject_scope_cluster& value);


protected:
    AuthObject_scope_cluster cluster_;
    bool clusterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AuthObject_scope_H_

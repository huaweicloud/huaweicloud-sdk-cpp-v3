
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowInformationAboutDatabaseProxyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowInformationAboutDatabaseProxyResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Proxy.h>
#include <huaweicloud/rds/v3/model/ReadonlyInstances.h>
#include <vector>
#include <huaweicloud/rds/v3/model/MasterInstance.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowInformationAboutDatabaseProxyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInformationAboutDatabaseProxyResponse();
    virtual ~ShowInformationAboutDatabaseProxyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowInformationAboutDatabaseProxyResponse members

    /// <summary>
    /// 
    /// </summary>

    Proxy getProxy() const;
    bool proxyIsSet() const;
    void unsetproxy();
    void setProxy(const Proxy& value);

    /// <summary>
    /// 
    /// </summary>

    MasterInstance getMasterInstance() const;
    bool masterInstanceIsSet() const;
    void unsetmasterInstance();
    void setMasterInstance(const MasterInstance& value);

    /// <summary>
    /// 只读实例信息。
    /// </summary>

    std::vector<ReadonlyInstances>& getReadonlyInstances();
    bool readonlyInstancesIsSet() const;
    void unsetreadonlyInstances();
    void setReadonlyInstances(const std::vector<ReadonlyInstances>& value);


protected:
    Proxy proxy_;
    bool proxyIsSet_;
    MasterInstance masterInstance_;
    bool masterInstanceIsSet_;
    std::vector<ReadonlyInstances> readonlyInstances_;
    bool readonlyInstancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowInformationAboutDatabaseProxyResponse_H_

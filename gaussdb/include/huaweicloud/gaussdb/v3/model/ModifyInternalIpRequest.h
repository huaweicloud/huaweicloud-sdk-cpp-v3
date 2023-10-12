
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyInternalIpRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyInternalIpRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyInternalIpRequest
    : public ModelBase
{
public:
    ModifyInternalIpRequest();
    virtual ~ModifyInternalIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyInternalIpRequest members

    /// <summary>
    /// 内网IP。
    /// </summary>

    std::string getInternalIp() const;
    bool internalIpIsSet() const;
    void unsetinternalIp();
    void setInternalIp(const std::string& value);


protected:
    std::string internalIp_;
    bool internalIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyInternalIpRequest_H_

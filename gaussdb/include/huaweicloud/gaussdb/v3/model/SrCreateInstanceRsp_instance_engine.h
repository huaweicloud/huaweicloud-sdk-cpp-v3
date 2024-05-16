
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_engine_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_engine_H_


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
/// 引擎信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SrCreateInstanceRsp_instance_engine
    : public ModelBase
{
public:
    SrCreateInstanceRsp_instance_engine();
    virtual ~SrCreateInstanceRsp_instance_engine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SrCreateInstanceRsp_instance_engine members

    /// <summary>
    /// 引擎类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 引擎大版本号。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_engine_H_

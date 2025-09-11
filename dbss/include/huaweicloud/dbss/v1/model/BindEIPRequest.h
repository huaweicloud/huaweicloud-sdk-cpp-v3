
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_BindEIPRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_BindEIPRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  BindEIPRequest
    : public ModelBase
{
public:
    BindEIPRequest();
    virtual ~BindEIPRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindEIPRequest members

    /// <summary>
    /// EIP信息
    /// </summary>

    std::string getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const std::string& value);

    /// <summary>
    /// EIP ID
    /// </summary>

    std::string getEipId() const;
    bool eipIdIsSet() const;
    void unseteipId();
    void setEipId(const std::string& value);


protected:
    std::string eip_;
    bool eipIsSet_;
    std::string eipId_;
    bool eipIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_BindEIPRequest_H_

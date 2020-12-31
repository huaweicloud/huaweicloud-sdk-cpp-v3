
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_SubnetResult_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_SubnetResult_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  SubnetResult
    : public ModelBase
{
public:
    SubnetResult();
    virtual ~SubnetResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubnetResult members

    /// <summary>
    /// uuid形式的一个资源标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：子网的状态。   取值范围：ACTIVE,UNKNOWN,ERROR       ACTIVE表示子网已挂载到ROUTER上       UNKNOWN表示子网还未挂载到ROUTER上       ERROR表示子网状态故障  
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_SubnetResult_H_

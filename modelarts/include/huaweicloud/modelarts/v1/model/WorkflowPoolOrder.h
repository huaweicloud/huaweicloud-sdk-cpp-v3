
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowPoolOrder_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowPoolOrder_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/SkuInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// pool order struct
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowPoolOrder
    : public ModelBase
{
public:
    WorkflowPoolOrder();
    virtual ~WorkflowPoolOrder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowPoolOrder members

    /// <summary>
    /// 订阅ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SkuInfo getSku() const;
    bool skuIsSet() const;
    void unsetsku();
    void setSku(const SkuInfo& value);

    /// <summary>
    /// 订阅计数。
    /// </summary>

    std::string getSkuCount() const;
    bool skuCountIsSet() const;
    void unsetskuCount();
    void setSkuCount(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    SkuInfo sku_;
    bool skuIsSet_;
    std::string skuCount_;
    bool skuCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowPoolOrder_H_

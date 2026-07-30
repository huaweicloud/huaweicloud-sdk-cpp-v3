
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Npu_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Npu_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Ascend规格信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Npu
    : public ModelBase
{
public:
    Npu();
    virtual ~Npu();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Npu members

    /// <summary>
    /// npu卡数。
    /// </summary>

    std::string getUnitNum() const;
    bool unitNumIsSet() const;
    void unsetunitNum();
    void setUnitNum(const std::string& value);

    /// <summary>
    /// 产品名。
    /// </summary>

    std::string getProductName() const;
    bool productNameIsSet() const;
    void unsetproductName();
    void setProductName(const std::string& value);

    /// <summary>
    /// 内存。
    /// </summary>

    std::string getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const std::string& value);


protected:
    std::string unitNum_;
    bool unitNumIsSet_;
    std::string productName_;
    bool productNameIsSet_;
    std::string memory_;
    bool memoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Npu_H_

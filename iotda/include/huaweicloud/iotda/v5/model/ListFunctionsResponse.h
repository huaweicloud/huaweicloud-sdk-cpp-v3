
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListFunctionsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListFunctionsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/FunctionDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListFunctionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFunctionsResponse();
    virtual ~ListFunctionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionsResponse members

    /// <summary>
    /// **参数说明**：编解码函数列表。
    /// </summary>

    std::vector<FunctionDTO>& getProductFunctions();
    bool productFunctionsIsSet() const;
    void unsetproductFunctions();
    void setProductFunctions(const std::vector<FunctionDTO>& value);

    /// <summary>
    /// **参数说明**：满足查询条件的记录总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<FunctionDTO> productFunctions_;
    bool productFunctionsIsSet_;
    int64_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListFunctionsResponse_H_

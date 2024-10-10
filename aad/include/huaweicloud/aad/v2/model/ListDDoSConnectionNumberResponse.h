
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSConnectionNumberResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSConnectionNumberResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/ListConnectionNumberData.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListDDoSConnectionNumberResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDDoSConnectionNumberResponse();
    virtual ~ListDDoSConnectionNumberResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDoSConnectionNumberResponse members

    /// <summary>
    /// items
    /// </summary>

    std::vector<ListConnectionNumberData>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<ListConnectionNumberData>& value);


protected:
    std::vector<ListConnectionNumberData> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSConnectionNumberResponse_H_

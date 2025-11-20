
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSBlackHoleEventResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSBlackHoleEventResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/ListBlackHoleEventRecordItem.h>
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
class HUAWEICLOUD_AAD_V2_EXPORT  ListDDoSBlackHoleEventResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDDoSBlackHoleEventResponse();
    virtual ~ListDDoSBlackHoleEventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDoSBlackHoleEventResponse members

    /// <summary>
    /// items
    /// </summary>

    std::vector<ListBlackHoleEventRecordItem>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<ListBlackHoleEventRecordItem>& value);


protected:
    std::vector<ListBlackHoleEventRecordItem> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSBlackHoleEventResponse_H_

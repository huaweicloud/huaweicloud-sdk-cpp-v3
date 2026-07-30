
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/EventModel.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/EventListMeta.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEventsResponse();
    virtual ~ListEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEventsResponse members

    /// <summary>
    /// **参数描述**：API版本。 **取值范围**：可选值如下： - v1
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数描述**：资源类型。 **取值范围**：可选值如下： - EventList：事件列表
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EventListMeta getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const EventListMeta& value);

    /// <summary>
    /// **参数描述**：事件列表。
    /// </summary>

    std::vector<EventModel>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<EventModel>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    EventListMeta metadata_;
    bool metadataIsSet_;
    std::vector<EventModel> items_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListEventsResponse_H_

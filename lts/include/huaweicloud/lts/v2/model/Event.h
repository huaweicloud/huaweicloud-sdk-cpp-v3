
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Event_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Event_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Metadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Event
    : public ModelBase
{
public:
    Event();
    virtual ~Event();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Event members

    /// <summary>
    /// 
    /// </summary>

    Metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Metadata& value);

    /// <summary>
    /// 告警产生时间(时间戳)
    /// </summary>

    int64_t getStartsAt() const;
    bool startsAtIsSet() const;
    void unsetstartsAt();
    void setStartsAt(int64_t value);


protected:
    Metadata metadata_;
    bool metadataIsSet_;
    int64_t startsAt_;
    bool startsAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Event_H_

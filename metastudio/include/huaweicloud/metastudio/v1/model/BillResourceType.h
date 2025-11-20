
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BillResourceType_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BillResourceType_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BillResourceType
: public ModelBase
{
public:
    BillResourceType();
    virtual ~BillResourceType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eBillResourceType 
    {
        BillResourceType_2D_DIGITAL_HUMAN_BASIC,
        BillResourceType_2D_DIGITAL_HUMAN_ADVANCED,
        BillResourceType_2D_DIGITAL_HUMAN_FLEXUS,
        BillResourceType_VOICE_BASIC,
        BillResourceType_VOICE_MIDDLE,
        BillResourceType_VOICE_ADVANCE,
        BillResourceType_VOICE_THIRD_PARTY,
        BillResourceType_VOICE_THIRD_PARTY_LJZN,
        BillResourceType_VOICE_FLEXUS,
    };

    eBillResourceType getValue() const;
    void setValue(eBillResourceType const value);

protected:
    eBillResourceType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BillResourceType_H_


#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChardMode_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChardMode_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ChardMode
: public ModelBase
{
public:
    ChardMode();
    virtual ~ChardMode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eChardMode 
    {
        ChardMode_PERIODIC,
        ChardMode_ONE_TIME,
        ChardMode_ON_DEMAND,
    };

    eChardMode getValue() const;
    void setValue(eChardMode const value);

protected:
    eChardMode value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChardMode_H_

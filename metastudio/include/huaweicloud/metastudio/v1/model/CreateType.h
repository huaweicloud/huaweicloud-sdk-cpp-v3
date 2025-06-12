
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateType_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateType_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateType
: public ModelBase
{
public:
    CreateType();
    virtual ~CreateType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eCreateType 
    {
        CreateType_PACKAGE,
        CreateType_SEGMENT,
    };

    eCreateType getValue() const;
    void setValue(eCreateType const value);

protected:
    eCreateType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateType_H_


#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HotWordsTypeEnum_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HotWordsTypeEnum_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  HotWordsTypeEnum
: public ModelBase
{
public:
    HotWordsTypeEnum();
    virtual ~HotWordsTypeEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eHotWordsTypeEnum 
    {
        HotWordsTypeEnum_SIS,
        HotWordsTypeEnum_MOBVOI,
    };

    eHotWordsTypeEnum getValue() const;
    void setValue(eHotWordsTypeEnum const value);

protected:
    eHotWordsTypeEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HotWordsTypeEnum_H_


#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LanguageEnum_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LanguageEnum_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LanguageEnum
: public ModelBase
{
public:
    LanguageEnum();
    virtual ~LanguageEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eLanguageEnum 
    {
        LanguageEnum_zh_CN,
        LanguageEnum_en_US,
        LanguageEnum_CN,
        LanguageEnum_EN,
        LanguageEnum_ESP,
        LanguageEnum_por,
        LanguageEnum_Arabic,
        LanguageEnum_Thai,
    };

    eLanguageEnum getValue() const;
    void setValue(eLanguageEnum const value);

protected:
    eLanguageEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LanguageEnum_H_

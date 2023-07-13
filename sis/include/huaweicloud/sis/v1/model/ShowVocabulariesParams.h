
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesParams_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesParams_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  ShowVocabulariesParams
    : public ModelBase
{
public:
    ShowVocabulariesParams();
    virtual ~ShowVocabulariesParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVocabulariesParams members

    /// <summary>
    /// 热词表的表名，用于筛选热词表表名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesParams_H_


#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_StructTemplateModel_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_StructTemplateModel_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新或者查询结构化模板对象
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  StructTemplateModel
    : public ModelBase
{
public:
    StructTemplateModel();
    virtual ~StructTemplateModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StructTemplateModel members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_StructTemplateModel_H_

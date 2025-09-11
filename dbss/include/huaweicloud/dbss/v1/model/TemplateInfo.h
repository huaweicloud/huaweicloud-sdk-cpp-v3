
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_TemplateInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_TemplateInfo_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/TemplateBean.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  TemplateInfo
    : public ModelBase
{
public:
    TemplateInfo();
    virtual ~TemplateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateInfo members

    /// <summary>
    /// 
    /// </summary>

    TemplateBean getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const TemplateBean& value);


protected:
    TemplateBean template_;
    bool templateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_TemplateInfo_H_

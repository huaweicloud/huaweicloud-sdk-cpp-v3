
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ActionInfo_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ActionInfo_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/DetailInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ActionInfo
    : public ModelBase
{
public:
    ActionInfo();
    virtual ~ActionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionInfo members

    /// <summary>
    /// 动作类型：block:阻断,captcha:人机验证;log: 仅记录;dynamic_block:动态阻断
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DetailInfo getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const DetailInfo& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    DetailInfo detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ActionInfo_H_

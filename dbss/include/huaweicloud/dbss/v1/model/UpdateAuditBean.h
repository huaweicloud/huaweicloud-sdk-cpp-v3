
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改审计实例信息bean
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  UpdateAuditBean
    : public ModelBase
{
public:
    UpdateAuditBean();
    virtual ~UpdateAuditBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuditBean members

    /// <summary>
    /// 实例名称。只能由中文字符,英文字母,数字,下划线,中划线组成的字符串,长度小于等于64。不能为空字符串。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例描述信息，只能由中文字符,英文字母,数字,下划线,中划线,空格组成的字符串，长度小于等于255。可以为空字符串。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string comment_;
    bool commentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditBean_H_

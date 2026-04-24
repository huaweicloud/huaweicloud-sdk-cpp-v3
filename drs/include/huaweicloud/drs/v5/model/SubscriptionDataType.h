
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SubscriptionDataType_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SubscriptionDataType_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订阅的数据类型是否包含DDL/DML语句，返回值： true：是。 false：否。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SubscriptionDataType
    : public ModelBase
{
public:
    SubscriptionDataType();
    virtual ~SubscriptionDataType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscriptionDataType members

    /// <summary>
    /// 数据操作语言，取值： true：订阅DML false：不订阅DML
    /// </summary>

    bool isIsDmlSubscribed() const;
    bool isDmlSubscribedIsSet() const;
    void unsetisDmlSubscribed();
    void setIsDmlSubscribed(bool value);

    /// <summary>
    /// 数据定义语言，取值： true：订阅DDL false：不订阅DDL
    /// </summary>

    bool isIsDdlSubscribed() const;
    bool isDdlSubscribedIsSet() const;
    void unsetisDdlSubscribed();
    void setIsDdlSubscribed(bool value);


protected:
    bool isDmlSubscribed_;
    bool isDmlSubscribedIsSet_;
    bool isDdlSubscribed_;
    bool isDdlSubscribedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SubscriptionDataType_H_

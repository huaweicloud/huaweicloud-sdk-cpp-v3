
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListConnectionNumberDataList_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListConnectionNumberDataList_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_AAD_V2_EXPORT  ListConnectionNumberDataList
    : public ModelBase
{
public:
    ListConnectionNumberDataList();
    virtual ~ListConnectionNumberDataList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConnectionNumberDataList members

    /// <summary>
    /// 时间戳毫秒值
    /// </summary>

    int32_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int32_t value);

    /// <summary>
    /// 连接数
    /// </summary>

    int32_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int32_t value);


protected:
    int32_t time_;
    bool timeIsSet_;
    int32_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListConnectionNumberDataList_H_

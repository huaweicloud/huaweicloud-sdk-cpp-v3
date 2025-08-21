
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_display_id_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_display_id_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询ID
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CesDimsItem_display_id
    : public ModelBase
{
public:
    CesDimsItem_display_id();
    virtual ~CesDimsItem_display_id();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CesDimsItem_display_id members

    /// <summary>
    /// 中文名称
    /// </summary>

    std::string getZhCn() const;
    bool zhCnIsSet() const;
    void unsetzhCn();
    void setZhCn(const std::string& value);

    /// <summary>
    /// 英文名称
    /// </summary>

    std::string getEnUs() const;
    bool enUsIsSet() const;
    void unsetenUs();
    void setEnUs(const std::string& value);


protected:
    std::string zhCn_;
    bool zhCnIsSet_;
    std::string enUs_;
    bool enUsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_display_id_H_


#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_Dress_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_Dress_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  Dress
    : public ModelBase
{
public:
    Dress();
    virtual ~Dress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Dress members

    /// <summary>
    /// 是否带眼镜： • yes：带眼镜 • dark：带墨镜 • none：未戴眼镜 • unknown：未知
    /// </summary>

    std::string getGlass() const;
    bool glassIsSet() const;
    void unsetglass();
    void setGlass(const std::string& value);

    /// <summary>
    /// 是否戴帽子： • yes：戴帽子 • none：未戴帽子 • unknown：未知
    /// </summary>

    std::string getHat() const;
    bool hatIsSet() const;
    void unsethat();
    void setHat(const std::string& value);


protected:
    std::string glass_;
    bool glassIsSet_;
    std::string hat_;
    bool hatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_Dress_H_

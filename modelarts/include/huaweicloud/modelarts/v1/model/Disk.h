
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Disk_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Disk_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 磁盘信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Disk
    : public ModelBase
{
public:
    Disk();
    virtual ~Disk();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Disk members

    /// <summary>
    /// 磁盘大小。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 磁盘大小单位，一般为GB。
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    std::string size_;
    bool sizeIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Disk_H_

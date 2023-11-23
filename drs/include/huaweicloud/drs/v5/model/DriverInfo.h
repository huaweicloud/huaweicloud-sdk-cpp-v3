
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DriverInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DriverInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DriverInfo
    : public ModelBase
{
public:
    DriverInfo();
    virtual ~DriverInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DriverInfo members

    /// <summary>
    /// 文件名称。
    /// </summary>

    std::string getDriverName() const;
    bool driverNameIsSet() const;
    void unsetdriverName();
    void setDriverName(const std::string& value);

    /// <summary>
    /// 最后修改时间。
    /// </summary>

    std::string getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const std::string& value);

    /// <summary>
    /// 文件大小，单位：byte
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string driverName_;
    bool driverNameIsSet_;
    std::string lastModified_;
    bool lastModifiedIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DriverInfo_H_

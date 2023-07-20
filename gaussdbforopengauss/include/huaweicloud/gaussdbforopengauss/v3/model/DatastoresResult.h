
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatastoresResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatastoresResult_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库引擎列表。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DatastoresResult
    : public ModelBase
{
public:
    DatastoresResult();
    virtual ~DatastoresResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DatastoresResult members

    /// <summary>
    /// 部署形态支持的引擎版本列表
    /// </summary>

    std::vector<std::string>& getSupportedVersions();
    bool supportedVersionsIsSet() const;
    void unsetsupportedVersions();
    void setSupportedVersions(const std::vector<std::string>& value);

    /// <summary>
    /// 部署形态
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);


protected:
    std::vector<std::string> supportedVersions_;
    bool supportedVersionsIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatastoresResult_H_

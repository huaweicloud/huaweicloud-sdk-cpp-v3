
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingfilesInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingfilesInfo_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/AomMappingLogStreamInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AomMappingfilesInfo
    : public ModelBase
{
public:
    AomMappingfilesInfo();
    virtual ~AomMappingfilesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AomMappingfilesInfo members

    /// <summary>
    /// 路径名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AomMappingLogStreamInfo getLogStreamInfo() const;
    bool logStreamInfoIsSet() const;
    void unsetlogStreamInfo();
    void setLogStreamInfo(const AomMappingLogStreamInfo& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    AomMappingLogStreamInfo logStreamInfo_;
    bool logStreamInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AomMappingfilesInfo_H_

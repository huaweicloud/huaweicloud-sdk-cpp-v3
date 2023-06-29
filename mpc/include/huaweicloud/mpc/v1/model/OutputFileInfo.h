
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputFileInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputFileInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/SourceInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  OutputFileInfo
    : public ModelBase
{
public:
    OutputFileInfo();
    virtual ~OutputFileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OutputFileInfo members

    /// <summary>
    /// 输出文件名。 
    /// </summary>

    std::string getOutputFileName() const;
    bool outputFileNameIsSet() const;
    void unsetoutputFileName();
    void setOutputFileName(const std::string& value);

    /// <summary>
    /// 处理信息。 
    /// </summary>

    std::string getExecDescription() const;
    bool execDescriptionIsSet() const;
    void unsetexecDescription();
    void setExecDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SourceInfo getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const SourceInfo& value);


protected:
    std::string outputFileName_;
    bool outputFileNameIsSet_;
    std::string execDescription_;
    bool execDescriptionIsSet_;
    SourceInfo metaData_;
    bool metaDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputFileInfo_H_

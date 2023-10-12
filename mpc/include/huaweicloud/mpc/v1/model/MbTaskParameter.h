
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MbTaskParameter_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MbTaskParameter_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/mpc/v1/model/MetaData.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  MbTaskParameter
    : public ModelBase
{
public:
    MbTaskParameter();
    virtual ~MbTaskParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MbTaskParameter members

    /// <summary>
    /// 具体状态描述，FAILED时可用于分析问题。 
    /// </summary>

    std::string getStatusDescription() const;
    bool statusDescriptionIsSet() const;
    void unsetstatusDescription();
    void setStatusDescription(const std::string& value);

    /// <summary>
    /// 输出文件名称。 
    /// </summary>

    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MetaData getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const MetaData& value);


protected:
    std::string statusDescription_;
    bool statusDescriptionIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;
    MetaData metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MbTaskParameter_H_


#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsObject_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsObject_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  ObsObject
    : public ModelBase
{
public:
    ObsObject();
    virtual ~ObsObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ObsObject members

    /// <summary>
    /// 对象的key 
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件大小 
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 文件的最后修改时间 
    /// </summary>

    std::string getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string lastModified_;
    bool lastModifiedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsObject_H_

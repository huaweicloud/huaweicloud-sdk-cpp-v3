
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchByChecksumRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchByChecksumRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  SearchByChecksumRequest
    : public ModelBase
{
public:
    SearchByChecksumRequest();
    virtual ~SearchByChecksumRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchByChecksumRequest members

    /// <summary>
    /// checksum
    /// </summary>

    std::string getChecksum() const;
    bool checksumIsSet() const;
    void unsetchecksum();
    void setChecksum(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 仓库类型
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 是否在项目中
    /// </summary>

    std::string getInProject() const;
    bool inProjectIsSet() const;
    void unsetinProject();
    void setInProject(const std::string& value);


protected:
    std::string checksum_;
    bool checksumIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string inProject_;
    bool inProjectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchByChecksumRequest& dereference_from_shared_ptr(std::shared_ptr<SearchByChecksumRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SearchByChecksumRequest_H_

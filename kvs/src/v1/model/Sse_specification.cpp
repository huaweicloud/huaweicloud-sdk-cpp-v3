

#include "huaweicloud/kvs/v1/model/Sse_specification.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Sse_specification::Sse_specification()
{
    enable_ = false;
    enableIsSet_ = false;
    sseType_ = "";
    sseTypeIsSet_ = false;
    sseAlgorithm_ = "";
    sseAlgorithmIsSet_ = false;
    cmkId_ = "";
    cmkIdIsSet_ = false;
}

Sse_specification::~Sse_specification() = default;

void Sse_specification::validate()
{
}

bool Sse_specification::toBson(Builder &builder) const
{

    if (enableIsSet_ && !bson_append(builder, "enable", enable_)) {
        return false;
    }
    if (sseTypeIsSet_ && !bson_append(builder, "sse_type", sseType_)) {
        return false;
    }
    if (sseAlgorithmIsSet_ && !bson_append(builder, "sse_algorithm", sseAlgorithm_)) {
        return false;
    }
    if (cmkIdIsSet_ && !bson_append(builder, "cmk_id", cmkId_)) {
        return false;
    }

    return true;
}

bool Sse_specification::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "enable") {
            if (!bson_get(it, enable_)) {
                return false;
            }
            enableIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "sse_type") {
            if (!bson_get(it, sseType_)) {
                return false;
            }
            sseTypeIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "sse_algorithm") {
            if (!bson_get(it, sseAlgorithm_)) {
                return false;
            }
            sseAlgorithmIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "cmk_id") {
            if (!bson_get(it, cmkId_)) {
                return false;
            }
            cmkIdIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

bool Sse_specification::isEnable() const
{
    return enable_;
}

void Sse_specification::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool Sse_specification::enableIsSet() const
{
    return enableIsSet_;
}

void Sse_specification::unsetenable()
{
    enableIsSet_ = false;
}

std::string Sse_specification::getSseType() const
{
    return sseType_;
}

void Sse_specification::setSseType(const std::string& value)
{
    sseType_ = value;
    sseTypeIsSet_ = true;
}

bool Sse_specification::sseTypeIsSet() const
{
    return sseTypeIsSet_;
}

void Sse_specification::unsetsseType()
{
    sseTypeIsSet_ = false;
}

std::string Sse_specification::getSseAlgorithm() const
{
    return sseAlgorithm_;
}

void Sse_specification::setSseAlgorithm(const std::string& value)
{
    sseAlgorithm_ = value;
    sseAlgorithmIsSet_ = true;
}

bool Sse_specification::sseAlgorithmIsSet() const
{
    return sseAlgorithmIsSet_;
}

void Sse_specification::unsetsseAlgorithm()
{
    sseAlgorithmIsSet_ = false;
}

std::string Sse_specification::getCmkId() const
{
    return cmkId_;
}

void Sse_specification::setCmkId(const std::string& value)
{
    cmkId_ = value;
    cmkIdIsSet_ = true;
}

bool Sse_specification::cmkIdIsSet() const
{
    return cmkIdIsSet_;
}

void Sse_specification::unsetcmkId()
{
    cmkIdIsSet_ = false;
}

}
}
}
}
}


